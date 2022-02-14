
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7280_state {int ctrl_lb; int ctrl_hb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ad7280_state*,unsigned int*) ;
 scalar_t__ FUNC_1 (struct ad7280_state*,unsigned int) ;
 int FUNC_2 (struct ad7280_state*,int ,int,int,int) ;
 unsigned int FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(struct ad7280_state *VAR_12)
{
 unsigned int VAR_13, VAR_14;
 int VAR_15;

 VAR_15 = FUNC_2(VAR_12, VAR_7, VAR_1, 1,
      VAR_3 |
      VAR_4 |
      VAR_5 |
      VAR_6 |
      VAR_12->ctrl_lb);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_2(VAR_12, VAR_7, VAR_1, 1,
      VAR_3 |
      VAR_4 |
      VAR_5 |
      VAR_12->ctrl_lb);
 if (VAR_15)
  goto error_power_down;

 VAR_15 = FUNC_2(VAR_12, VAR_7, VAR_9, 1,
      VAR_1 << 2);
 if (VAR_15)
  goto error_power_down;

 for (VAR_14 = 0; VAR_14 <= VAR_8; VAR_14++) {
  VAR_15 = FUNC_0(VAR_12, &VAR_13);
  if (VAR_15)
   goto error_power_down;

  if (VAR_13 == 0)
   return VAR_14 - 1;

  if (FUNC_1(VAR_12, VAR_13)) {
   VAR_15 = -VAR_11;
   goto error_power_down;
  }

  if (VAR_14 != FUNC_3(VAR_13 >> 27)) {
   VAR_15 = -VAR_11;
   goto error_power_down;
  }
 }
 VAR_15 = -VAR_10;

error_power_down:
 FUNC_2(VAR_12, VAR_7, VAR_0, 1,
       VAR_2 | VAR_12->ctrl_hb);

 return VAR_15;
}
