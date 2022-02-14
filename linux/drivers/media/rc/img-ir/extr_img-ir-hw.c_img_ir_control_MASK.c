
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct img_ir_control {int code_type; scalar_t__ bitinvd2; scalar_t__ bitoriend2; scalar_t__ decodend2; scalar_t__ bitinv; scalar_t__ d1validsel; scalar_t__ bitorien; scalar_t__ decodinpol; scalar_t__ ldrdec; scalar_t__ hdrtog; scalar_t__ decoden; } ;


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

__attribute__((used)) static u32 FUNC_0(const struct img_ir_control *VAR_11)
{
 u32 VAR_12 = VAR_11->code_type << VAR_4;
 if (VAR_11->decoden)
  VAR_12 |= VAR_6;
 if (VAR_11->hdrtog)
  VAR_12 |= VAR_9;
 if (VAR_11->ldrdec)
  VAR_12 |= VAR_10;
 if (VAR_11->decodinpol)
  VAR_12 |= VAR_8;
 if (VAR_11->bitorien)
  VAR_12 |= VAR_2;
 if (VAR_11->d1validsel)
  VAR_12 |= VAR_5;
 if (VAR_11->bitinv)
  VAR_12 |= VAR_0;
 if (VAR_11->decodend2)
  VAR_12 |= VAR_7;
 if (VAR_11->bitoriend2)
  VAR_12 |= VAR_3;
 if (VAR_11->bitinvd2)
  VAR_12 |= VAR_1;
 return VAR_12;
}
