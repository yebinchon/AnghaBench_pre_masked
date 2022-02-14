
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union vnt_phy_field_swap {int field_write; int * swap; int field_read; } ;
typedef int u8 ;
struct vnt_private {int lock; scalar_t__ PortOffset; } ;


 int FUNC_0 (struct vnt_private*,int ) ;
 int FUNC_1 (void*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned char,unsigned char) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ,int ,unsigned char*,unsigned char*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct vnt_private*,int,int ,int ,int *) ;

void FUNC_12(struct vnt_private *VAR_26, u8 VAR_27)
{
 union vnt_phy_field_swap VAR_28;
 unsigned char VAR_29, VAR_30;
 unsigned long VAR_31;

 FUNC_8(&VAR_26->lock, VAR_31);


 FUNC_3(VAR_26->PortOffset);


 FUNC_11(VAR_26, 14,
     FUNC_0(VAR_26, VAR_17),
     VAR_13, &VAR_28.field_read);


 FUNC_10(VAR_28.swap[0], VAR_28.swap[1]);

 FUNC_5(VAR_26->PortOffset + VAR_9, VAR_28.field_write);


 FUNC_11(VAR_26, 14,
     FUNC_0(VAR_26, VAR_19),
     VAR_13, &VAR_28.field_read);

 FUNC_10(VAR_28.swap[0], VAR_28.swap[1]);

 FUNC_5(VAR_26->PortOffset + VAR_11, VAR_28.field_write);


 FUNC_11(VAR_26, 14,
     FUNC_0(VAR_26, VAR_23),
     VAR_13, &VAR_28.field_read);

 FUNC_10(VAR_28.swap[0], VAR_28.swap[1]);

 FUNC_5(VAR_26->PortOffset + VAR_12, VAR_28.field_write);


 FUNC_11(VAR_26, 14,
     FUNC_0(VAR_26, VAR_14),
     VAR_13, &VAR_28.field_read);

 FUNC_10(VAR_28.swap[0], VAR_28.swap[1]);

 FUNC_5(VAR_26->PortOffset + VAR_10, VAR_28.field_write);


 FUNC_7(VAR_24,
       VAR_27,
       &VAR_29,
       &VAR_30);
 FUNC_6(VAR_26->PortOffset + VAR_6,
       FUNC_4(VAR_29, VAR_30));

 FUNC_7(VAR_25,
       VAR_27,
       &VAR_29,
       &VAR_30);
 FUNC_6(VAR_26->PortOffset + VAR_8,
       FUNC_4(VAR_29, VAR_30));

 FUNC_7(VAR_15,
       VAR_27,
       &VAR_29,
       &VAR_30);
 FUNC_6(VAR_26->PortOffset + VAR_0,
       FUNC_4(VAR_29, VAR_30));

 FUNC_7(VAR_16,
       VAR_27,
       &VAR_29,
       &VAR_30);
 FUNC_6(VAR_26->PortOffset + VAR_1,
       FUNC_4(VAR_29, VAR_30));

 FUNC_7(VAR_18,
       VAR_27,
       &VAR_29,
       &VAR_30);
 FUNC_6(VAR_26->PortOffset + VAR_2,
       FUNC_4(VAR_29, VAR_30));

 FUNC_7(FUNC_1(
          (void *)VAR_26,
          VAR_20),
       VAR_27,
       &VAR_29,
       &VAR_30);
 FUNC_6(VAR_26->PortOffset + VAR_3,
       FUNC_4(VAR_29, VAR_30));

 FUNC_7(FUNC_1(
          (void *)VAR_26,
          VAR_21),
       VAR_27,
       &VAR_29,
       &VAR_30);
 FUNC_6(VAR_26->PortOffset + VAR_4,
       FUNC_4(VAR_29, VAR_30));

 FUNC_7(FUNC_1(
          (void *)VAR_26,
          VAR_22),
       VAR_27,
       &VAR_29,
       &VAR_30);
 FUNC_6(VAR_26->PortOffset + VAR_5,
       FUNC_4(VAR_29, VAR_30));

 FUNC_7(FUNC_1(
          (void *)VAR_26,
          VAR_22),
       VAR_27,
       &VAR_29,
       &VAR_30);
 FUNC_6(VAR_26->PortOffset + VAR_7,
       FUNC_4(VAR_29, VAR_30));

 FUNC_2(VAR_26->PortOffset);

 FUNC_9(&VAR_26->lock, VAR_31);
}
