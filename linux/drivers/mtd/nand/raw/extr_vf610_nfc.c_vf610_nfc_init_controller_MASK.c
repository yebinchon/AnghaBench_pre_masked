
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; } ;
struct TYPE_4__ {int options; TYPE_1__ ecc; } ;
struct vf610_nfc {TYPE_2__ chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vf610_nfc*,int ,int ) ;
 int FUNC_1 (struct vf610_nfc*,int ,int ) ;
 int FUNC_2 (struct vf610_nfc*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct vf610_nfc *VAR_8)
{
 if (VAR_8->chip.options & VAR_5)
  FUNC_1(VAR_8, VAR_7, VAR_0);
 else
  FUNC_0(VAR_8, VAR_7, VAR_0);

 if (VAR_8->chip.ecc.mode == VAR_6) {

  FUNC_2(VAR_8, VAR_7,
        VAR_1,
        VAR_2,
        VAR_4 >> 3);


  FUNC_1(VAR_8, VAR_7, VAR_3);
 }
}
