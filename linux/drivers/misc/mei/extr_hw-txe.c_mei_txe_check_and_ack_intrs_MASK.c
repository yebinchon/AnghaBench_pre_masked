
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_txe_hw {int intr_cause; } ;
struct mei_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mei_device*) ;
 int FUNC_1 (struct mei_txe_hw*,int ) ;
 int FUNC_2 (struct mei_txe_hw*,int ,int) ;
 int FUNC_3 (struct mei_device*) ;
 int FUNC_4 (struct mei_txe_hw*,int ) ;
 int FUNC_5 (struct mei_txe_hw*,int ,int) ;
 struct mei_txe_hw* FUNC_6 (struct mei_device*) ;

__attribute__((used)) static bool FUNC_7(struct mei_device *VAR_9, bool VAR_10)
{
 struct mei_txe_hw *VAR_11 = FUNC_6(VAR_9);
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 bool VAR_16;


 VAR_13 = FUNC_1(VAR_11, VAR_0);
 VAR_16 = (VAR_13 & VAR_3);
 if (!VAR_16)
  goto out;

 VAR_12 = FUNC_1(VAR_11, VAR_2);

 VAR_15 = FUNC_0(VAR_9);
 if (VAR_13 & VAR_4 && VAR_15) {
  VAR_14 = FUNC_4(VAR_11,
    VAR_7);
 } else {
  VAR_14 = 0;
  VAR_13 &= ~VAR_4;
 }

 VAR_16 = VAR_16 ||
  (VAR_12 & VAR_1) ||
  (VAR_14 & VAR_6);

 if (VAR_16 && VAR_10) {

  VAR_11->intr_cause |= VAR_12 & VAR_1;
  if (VAR_14 & VAR_5)
   VAR_11->intr_cause |= VAR_8;


  FUNC_3(VAR_9);


  FUNC_5(VAR_11,
   VAR_7, VAR_14);
  FUNC_2(VAR_11, VAR_2, VAR_12);
  FUNC_2(VAR_11, VAR_0, VAR_13);
 }

out:
 return VAR_16;
}
