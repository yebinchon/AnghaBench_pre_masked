
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union atto_vda_ae {int dummy; } atto_vda_ae ;
typedef scalar_t__ u8 ;
struct esas2r_adapter {int dummy; } ;
struct atto_vda_ae_hdr {scalar_t__ bylength; scalar_t__ byflags; int byversion; int bytype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct esas2r_adapter*,int ,struct atto_vda_ae_hdr*,int) ;
 int VAR_3 ;

void FUNC_2(struct esas2r_adapter *VAR_4, bool VAR_5)
{
 struct atto_vda_ae_hdr VAR_6;

 if (VAR_5)
  VAR_6.bytype = VAR_0;
 else
  VAR_6.bytype = VAR_1;

 VAR_6.byversion = VAR_2;
 VAR_6.byflags = 0;
 VAR_6.bylength = (u8)sizeof(struct atto_vda_ae_hdr);

 if (VAR_5)
  FUNC_0("*** sending power management AE ***");
 else
  FUNC_0("*** sending reset AE ***");

 FUNC_1(VAR_4, VAR_3, &VAR_6,
         sizeof(union atto_vda_ae));
}
