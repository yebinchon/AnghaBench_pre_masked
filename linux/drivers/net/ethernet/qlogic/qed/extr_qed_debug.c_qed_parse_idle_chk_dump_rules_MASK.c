
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct dbg_idle_chk_rule_parsing_data {int data; } ;
struct dbg_idle_chk_result_reg_hdr {int start_entry; scalar_t__ size; int data; } ;
struct dbg_idle_chk_result_hdr {size_t rule_id; size_t severity; scalar_t__ num_dumped_cond_regs; scalar_t__ num_dumped_info_regs; int mem_entry_id; } ;
struct TYPE_2__ {int * ptr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int ,int ) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_2 (char*,scalar_t__) ;
 char** VAR_9 ;
 TYPE_1__* VAR_10 ;
 scalar_t__ FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static u32 FUNC_5(u32 *VAR_11,
      u32 *VAR_12,
      u32 VAR_13,
      bool VAR_14,
      char *VAR_15,
      u32 *VAR_16, u32 *VAR_17)
{

 u32 VAR_18 = 0;

 u32 VAR_19;
 u16 VAR_20, VAR_21;

 *VAR_16 = 0;
 *VAR_17 = 0;


 for (VAR_19 = 0; VAR_19 < VAR_13 && VAR_11 < VAR_12;
      VAR_19++) {
  const struct dbg_idle_chk_rule_parsing_data *VAR_22;
  struct dbg_idle_chk_result_hdr *VAR_23;
  const char *VAR_24, *VAR_25;
  u32 VAR_26;
  bool VAR_27;
  u8 VAR_28;

  VAR_23 = (struct dbg_idle_chk_result_hdr *)VAR_11;
  VAR_22 =
   (const struct dbg_idle_chk_rule_parsing_data *)
   &VAR_10[VAR_0].
   ptr[VAR_23->rule_id];
  VAR_26 =
   FUNC_1(VAR_22->data,
      VAR_5);
  VAR_27 =
   FUNC_1(VAR_22->data,
    VAR_4) > 0;
  VAR_24 =
   &((const char *)
   VAR_10[VAR_1].ptr)
   [VAR_26];
  VAR_25 = VAR_24;
  VAR_28 = 0;

  if (VAR_23->severity >= VAR_8)
   return 0;


  VAR_11 += FUNC_0(sizeof(*VAR_23));


  if (VAR_23->severity == VAR_6 ||
      VAR_23->severity == VAR_7)
   (*VAR_16)++;
  else
   (*VAR_17)++;


  VAR_18 +=
      FUNC_3(FUNC_2(VAR_15,
         VAR_18), "%s: ",
       VAR_9[VAR_23->severity]);


  if (VAR_27)
   VAR_24 += FUNC_4(VAR_24) + 1;
  VAR_18 +=
      FUNC_3(FUNC_2(VAR_15,
         VAR_18), "%s.",
       VAR_27 &&
       VAR_14 ? VAR_24 : VAR_25);
  VAR_24 += FUNC_4(VAR_24) + 1;


  VAR_18 +=
      FUNC_3(FUNC_2(VAR_15,
         VAR_18), " Registers:");
  for (VAR_20 = 0;
       VAR_20 < VAR_23->num_dumped_cond_regs + VAR_23->num_dumped_info_regs;
       VAR_20++) {
   struct dbg_idle_chk_result_reg_hdr *VAR_29;
   bool VAR_30;
   u8 VAR_31;

   VAR_29 =
    (struct dbg_idle_chk_result_reg_hdr *)VAR_11;
   VAR_30 = FUNC_1(VAR_29->data,
        VAR_2);
   VAR_31 = FUNC_1(VAR_29->data,
        VAR_3);


   VAR_11 += FUNC_0(sizeof(*VAR_29));




   for (; VAR_31 > VAR_28;
        VAR_28++,
        VAR_24 += FUNC_4(VAR_24) + 1);

   VAR_18 +=
       FUNC_3(FUNC_2(VAR_15,
          VAR_18), " %s",
        VAR_24);
   if (VAR_20 < VAR_23->num_dumped_cond_regs && VAR_30)
    VAR_18 +=
        FUNC_3(FUNC_2(VAR_15,
           VAR_18),
         "[%d]", VAR_23->mem_entry_id +
         VAR_29->start_entry);
   VAR_18 +=
       FUNC_3(FUNC_2(VAR_15,
          VAR_18), "=");
   for (VAR_21 = 0; VAR_21 < VAR_29->size; VAR_21++, VAR_11++) {
    VAR_18 +=
        FUNC_3(FUNC_2(VAR_15,
           VAR_18),
         "0x%x", *VAR_11);
    if (VAR_21 < VAR_29->size - 1)
     VAR_18 +=
         FUNC_3(FUNC_2
          (VAR_15,
           VAR_18), ",");
   }
  }

  VAR_18 +=
      FUNC_3(FUNC_2(VAR_15, VAR_18), "\n");
 }


 if (VAR_11 > VAR_12)
  return 0;

 return VAR_18;
}
