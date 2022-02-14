
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct reg_fifo_element {int data; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (int*,int,char*,int*) ;
 int FUNC_4 (int*,char const**,char const**,int*) ;
 int FUNC_5 (int*,char const**,int*) ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 char** VAR_18 ;
 int FUNC_6 (char*,char*,...) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static enum dbg_status FUNC_8(u32 *VAR_19,
            char *VAR_20,
            u32 *VAR_21)
{
 const char *VAR_22, *VAR_23, *VAR_24;
 u32 VAR_25, VAR_26, VAR_27;
 struct reg_fifo_element *VAR_28;
 u8 VAR_29, VAR_30, VAR_31, VAR_32;
 u32 VAR_33 = 0;
 char VAR_34[4];


 VAR_19 += FUNC_5(VAR_19,
      &VAR_22, &VAR_26);
 if (FUNC_7(VAR_22, "global_params"))
  return VAR_1;


 VAR_19 += FUNC_3(VAR_19,
          VAR_26,
          VAR_20, &VAR_33);


 VAR_19 += FUNC_5(VAR_19,
      &VAR_22, &VAR_26);
 if (FUNC_7(VAR_22, "reg_fifo_data"))
  return VAR_1;
 VAR_19 += FUNC_4(VAR_19,
       &VAR_23, &VAR_24, &VAR_25);
 if (FUNC_7(VAR_23, "size"))
  return VAR_1;
 if (VAR_25 % VAR_5)
  return VAR_1;
 VAR_27 = VAR_25 / VAR_5;
 VAR_28 = (struct reg_fifo_element *)VAR_19;


 for (VAR_29 = 0; VAR_29 < VAR_27; VAR_29++) {
  bool VAR_35 = 0;


  VAR_32 = FUNC_1(VAR_28[VAR_29].data, VAR_13);
  if (VAR_32 == VAR_7)
   FUNC_6(VAR_34, "%s", "N/A");
  else
   FUNC_6(VAR_34, "%d", VAR_32);


  VAR_33 +=
      FUNC_6(FUNC_2(VAR_20,
         VAR_33),
       "raw: 0x%016llx, address: 0x%07x, access: %-5s, pf: %2d, vf: %s, port: %d, privilege: %-3s, protection: %-12s, master: %-4s, errors: ",
       VAR_28[VAR_29].data,
       (u32)FUNC_1(VAR_28[VAR_29].data,
        VAR_3) *
       VAR_4,
       VAR_14[FUNC_1(VAR_28[VAR_29].data,
          VAR_2)],
       (u32)FUNC_1(VAR_28[VAR_29].data,
        VAR_9),
       VAR_34,
       (u32)FUNC_1(VAR_28[VAR_29].data,
        VAR_10),
       VAR_16[FUNC_1(VAR_28[VAR_29].data,
      VAR_11)],
       VAR_17[FUNC_1(VAR_28[VAR_29].data,
      VAR_12)],
       VAR_15[FUNC_1(VAR_28[VAR_29].data,
      VAR_8)]);


  for (VAR_30 = 0,
       VAR_31 = FUNC_1(VAR_28[VAR_29].data,
      VAR_6);
       VAR_30 < FUNC_0(VAR_18);
       VAR_30++, VAR_31 >>= 1) {
   if (VAR_31 & 0x1) {
    if (VAR_35)
     VAR_33 +=
         FUNC_6(FUNC_2
          (VAR_20,
           VAR_33), ", ");
    VAR_33 +=
        FUNC_6(FUNC_2
         (VAR_20, VAR_33), "%s",
         VAR_18[VAR_30]);
    VAR_35 = 1;
   }
  }

  VAR_33 +=
      FUNC_6(FUNC_2(VAR_20, VAR_33), "\n");
 }

 VAR_33 += FUNC_6(FUNC_2(VAR_20,
        VAR_33),
      "fifo contained %d elements", VAR_27);


 *VAR_21 = VAR_33 + 1;

 return VAR_0;
}
