
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct igu_fifo_element {int dummy; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct igu_fifo_element*,char*,int*) ;
 int FUNC_2 (int*,int,char*,int*) ;
 int FUNC_3 (int*,char const**,char const**,int*) ;
 int FUNC_4 (int*,char const**,int*) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static enum dbg_status FUNC_7(u32 *VAR_3,
            char *VAR_4,
            u32 *VAR_5)
{
 const char *VAR_6, *VAR_7, *VAR_8;
 u32 VAR_9, VAR_10, VAR_11;
 struct igu_fifo_element *VAR_12;
 enum dbg_status VAR_13;
 u32 VAR_14 = 0;
 u8 VAR_15;


 VAR_3 += FUNC_4(VAR_3,
      &VAR_6, &VAR_10);
 if (FUNC_6(VAR_6, "global_params"))
  return VAR_0;


 VAR_3 += FUNC_2(VAR_3,
          VAR_10,
          VAR_4, &VAR_14);


 VAR_3 += FUNC_4(VAR_3,
      &VAR_6, &VAR_10);
 if (FUNC_6(VAR_6, "igu_fifo_data"))
  return VAR_0;
 VAR_3 += FUNC_3(VAR_3,
       &VAR_7, &VAR_8, &VAR_9);
 if (FUNC_6(VAR_7, "size"))
  return VAR_0;
 if (VAR_9 % VAR_2)
  return VAR_0;
 VAR_11 = VAR_9 / VAR_2;
 VAR_12 = (struct igu_fifo_element *)VAR_3;


 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
  VAR_13 = FUNC_1(&VAR_12[VAR_15],
          VAR_4,
          &VAR_14);
  if (VAR_13 != VAR_1)
   return VAR_13;
 }

 VAR_14 += FUNC_5(FUNC_0(VAR_4,
        VAR_14),
      "fifo contained %d elements", VAR_11);


 *VAR_5 = VAR_14 + 1;

 return VAR_1;
}
