
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
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ad7280_state*,unsigned int*) ;
 scalar_t__ FUNC_1 (struct ad7280_state*,unsigned int) ;
 int FUNC_2 (struct ad7280_state*) ;
 int FUNC_3 (struct ad7280_state*,unsigned int,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct ad7280_state *VAR_9, unsigned int VAR_10,
          unsigned int VAR_11)
{
 int VAR_12;
 unsigned int VAR_13;

 VAR_12 = FUNC_3(VAR_9, VAR_10, VAR_6, 0, VAR_11 << 2);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_3(VAR_9, VAR_5, VAR_0, 1,
      VAR_1 |
      VAR_3 |
      VAR_9->ctrl_hb);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_3(VAR_9, VAR_10, VAR_0, 0,
      VAR_1 |
      VAR_2 |
      VAR_4 |
      VAR_9->ctrl_hb);
 if (VAR_12)
  return VAR_12;

 FUNC_2(VAR_9);

 VAR_12 = FUNC_0(VAR_9, &VAR_13);
 if (VAR_12)
  return VAR_12;

 if (FUNC_1(VAR_9, VAR_13))
  return -VAR_8;

 if (((VAR_13 >> 27) != VAR_10) || (((VAR_13 >> 23) & 0xF) != VAR_11))
  return -VAR_7;

 return (VAR_13 >> 11) & 0xFFF;
}
