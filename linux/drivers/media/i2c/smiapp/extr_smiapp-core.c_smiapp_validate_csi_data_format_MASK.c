
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct smiapp_sensor {int mbus_frame_fmts; struct smiapp_csi_data_format const* csi_format; } ;
struct smiapp_csi_data_format {scalar_t__ code; } ;


 unsigned int FUNC_0 (struct smiapp_csi_data_format const*) ;
 struct smiapp_csi_data_format const* VAR_0 ;

__attribute__((used)) static const struct smiapp_csi_data_format
*FUNC_1(struct smiapp_sensor *VAR_1, u32 VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_1->mbus_frame_fmts & (1 << VAR_3)
      && VAR_0[VAR_3].code == VAR_2)
   return &VAR_0[VAR_3];
 }

 return VAR_1->csi_format;
}
