
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7280_state {int ctrl_hb; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ad7280_state*,unsigned int*) ;
 scalar_t__ FUNC_1 (struct ad7280_state*,unsigned int) ;
 int FUNC_2 (struct ad7280_state*) ;
 int FUNC_3 (struct ad7280_state*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct ad7280_state *VAR_9, unsigned int VAR_10,
        unsigned int *VAR_11)
{
 int VAR_12, VAR_13;
 unsigned int VAR_14, VAR_15 = 0;

 VAR_13 = FUNC_3(VAR_9, VAR_6, VAR_7, 1,
      VAR_0 << 2);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_3(VAR_9, VAR_6, VAR_2, 1,
      VAR_3 |
      VAR_4 |
      VAR_5 |
      VAR_9->ctrl_hb);
 if (VAR_13)
  return VAR_13;

 FUNC_2(VAR_9);

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_13 = FUNC_0(VAR_9, &VAR_14);
  if (VAR_13)
   return VAR_13;

  if (FUNC_1(VAR_9, VAR_14))
   return -VAR_8;

  if (VAR_11)
   VAR_11[VAR_12] = VAR_14;

  if (((VAR_14 >> 23) & 0xF) <= VAR_1)
   VAR_15 += ((VAR_14 >> 11) & 0xFFF);
 }

 return VAR_15;
}
