
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rt2x00lib_erp {int beacon_int; int eifs; int sifs; int slot_time; int basic_rates; int short_preamble; } ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (struct rt2x00_dev*,int ) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct rt2x00_dev *VAR_12,
     struct rt2x00lib_erp *VAR_13,
     u32 VAR_14)
{
 u16 VAR_15;

 if (VAR_14 & VAR_2) {
  VAR_15 = FUNC_0(VAR_12, VAR_7);
  FUNC_2(&VAR_15, VAR_8,
       !!VAR_13->short_preamble);
  FUNC_1(VAR_12, VAR_7, VAR_15);
 }

 if (VAR_14 & VAR_0)
  FUNC_1(VAR_12, VAR_9,
      VAR_13->basic_rates);

 if (VAR_14 & VAR_1) {
  VAR_15 = FUNC_0(VAR_12, VAR_10);
  FUNC_2(&VAR_15, VAR_11,
       VAR_13->beacon_int * 4);
  FUNC_1(VAR_12, VAR_10, VAR_15);
 }

 if (VAR_14 & VAR_3) {
  FUNC_1(VAR_12, VAR_4, VAR_13->slot_time);
  FUNC_1(VAR_12, VAR_5, VAR_13->sifs);
  FUNC_1(VAR_12, VAR_6, VAR_13->eifs);
 }
}
