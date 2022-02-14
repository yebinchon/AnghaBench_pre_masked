
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7280_state {unsigned int ctrl_hb; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ad7280_state*,unsigned int*) ;
 scalar_t__ FUNC_1 (struct ad7280_state*,unsigned int) ;
 int FUNC_2 (struct ad7280_state*,unsigned int,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct ad7280_state *VAR_8, unsigned int VAR_9,
         unsigned int VAR_10)
{
 int VAR_11;
 unsigned int VAR_12;


 VAR_11 = FUNC_2(VAR_8, VAR_4, VAR_0, 1,
      VAR_1 |
      VAR_3 |
      VAR_8->ctrl_hb);
 if (VAR_11)
  return VAR_11;


 VAR_11 = FUNC_2(VAR_8, VAR_9, VAR_0, 0,
      VAR_1 |
      VAR_2 |
      VAR_8->ctrl_hb);
 if (VAR_11)
  return VAR_11;


 VAR_11 = FUNC_2(VAR_8, VAR_9, VAR_5, 0, VAR_10 << 2);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_0(VAR_8, &VAR_12);
 if (VAR_11)
  return VAR_11;

 if (FUNC_1(VAR_8, VAR_12))
  return -VAR_7;

 if (((VAR_12 >> 27) != VAR_9) || (((VAR_12 >> 21) & 0x3F) != VAR_10))
  return -VAR_6;

 return (VAR_12 >> 13) & 0xFF;
}
