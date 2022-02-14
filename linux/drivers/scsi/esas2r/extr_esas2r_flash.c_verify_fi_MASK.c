
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct esas2r_flash_img {int length; scalar_t__ adap_typ; scalar_t__ num_comps; scalar_t__ checksum; void* status; struct esas2r_component_header* cmp_hdr; } ;
struct esas2r_flash_context {int fi_hdr_len; struct esas2r_flash_img* fi; } ;
struct esas2r_component_header {scalar_t__ img_type; int length; void* status; int image_offset; } ;
struct esas2r_adapter {int dummy; } ;
 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ FUNC_0 (struct esas2r_flash_context*) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int *) ;
 scalar_t__ FUNC_3 (struct esas2r_adapter*) ;

__attribute__((used)) static bool FUNC_4(struct esas2r_adapter *VAR_11,
        struct esas2r_flash_context *VAR_12)
{
 struct esas2r_flash_img *VAR_13 = VAR_12->fi;
 u8 VAR_14;
 bool VAR_15;
 u16 VAR_16;
 u32 VAR_17;
 struct esas2r_component_header *VAR_18;


 VAR_17 = VAR_13->length;

 if ((VAR_17 & 1)
     || VAR_17 < VAR_12->fi_hdr_len) {
  VAR_13->status = VAR_8;
  return 0;
 }


 VAR_14 = FUNC_3(VAR_11);
 if ((VAR_14 == VAR_5) || (VAR_13->adap_typ != VAR_14)) {
  VAR_13->status = VAR_6;
  return 0;
 }






 VAR_15 = 0;

 for (VAR_16 = 0, VAR_17 = 0, VAR_18 = VAR_13->cmp_hdr;
      VAR_16 < VAR_13->num_comps;
      VAR_16++, VAR_18++) {
  bool VAR_19 = 0;





  if (VAR_16 != VAR_18->img_type) {
   VAR_15 = 1;
   VAR_18->status = VAR_0;
   continue;
  }

  switch (VAR_18->img_type) {
  case 133:
   VAR_14 = VAR_4;
   break;

  case 129:
   VAR_14 = VAR_3;
   break;

  case 131:
   VAR_14 = VAR_2;
   break;
  }

  switch (VAR_18->img_type) {
  case 130:
  case 128:
   break;

  case 133:
  case 129:
  case 131:
   if (VAR_18->length & 0x1ff)
    VAR_19 = 1;


   if (VAR_18->length == 0)
    break;


   if (FUNC_1((u8 *)VAR_13 + VAR_18->image_offset, VAR_18->length)
       != VAR_14)
    VAR_19 = 1;

   break;

  case 132:


   if (VAR_18->length == 0) {
    VAR_19 = 1;
    break;
   }


   if (!FUNC_2((u8 *)VAR_13 + VAR_18->image_offset + VAR_18->length,
         VAR_18->length, ((void*)0)))
    VAR_19 = 1;

   break;

  default:

   VAR_13->status = VAR_10;
   return 0;
  }

  if (VAR_19) {
   VAR_15 = 1;
   VAR_18->status = VAR_0;
  } else {
   VAR_18->status = VAR_1;
   VAR_17 += VAR_18->length;
  }
 }

 if (VAR_15) {
  VAR_13->status = VAR_9;
  return 0;
 }


 if (VAR_17 != VAR_13->length - VAR_12->fi_hdr_len) {
  VAR_13->status = VAR_8;
  return 0;
 }


 if (VAR_13->checksum != FUNC_0(VAR_12)) {
  VAR_13->status = VAR_7;
  return 0;
 }

 return 1;
}
