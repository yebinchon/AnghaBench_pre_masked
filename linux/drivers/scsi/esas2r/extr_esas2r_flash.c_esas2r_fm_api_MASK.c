
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct esas2r_sg_context {int * cur_offset; int length; } ;
struct esas2r_request {struct esas2r_flash_context* interrupt_cx; int req_stat; } ;
struct esas2r_flash_img {int fi_version; int action; int length; struct esas2r_component_header* cmp_hdr; int num_comps; struct esas2r_sg_context* rel_version; int flags; int adap_typ; int checksum; int status; int scratch_buf; } ;
struct esas2r_flash_context {int fi_hdr_len; size_t comp_typ; int num_comps; int interrupt_cb; struct esas2r_sg_context sgc; int flsh_addr; int func; int task; int scratch; int * sgc_offset; struct esas2r_flash_img* fi; } ;
struct esas2r_component_header {int version; int status; int * pad; int image_offset; int length; int img_type; } ;
struct esas2r_adapter {int flash_ver; struct esas2r_sg_context* image_type; int flags; struct esas2r_flash_context flash_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct esas2r_flash_context*) ;
 int FUNC_1 (struct esas2r_adapter*,struct esas2r_request*,int ) ;
 int FUNC_2 (struct esas2r_adapter*) ;
 int FUNC_3 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_4 (struct esas2r_adapter*,struct esas2r_flash_img*) ;
 int FUNC_5 (struct esas2r_adapter*,struct esas2r_flash_img*) ;
 int VAR_20 ;
 int FUNC_6 (struct esas2r_adapter*) ;
 int FUNC_7 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_8 (struct esas2r_sg_context*,struct esas2r_sg_context*,int) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (struct esas2r_adapter*,struct esas2r_flash_context*) ;

bool FUNC_12(struct esas2r_adapter *VAR_21, struct esas2r_flash_img *VAR_22,
     struct esas2r_request *VAR_23, struct esas2r_sg_context *VAR_24)
{
 struct esas2r_flash_context *VAR_25 = &VAR_21->flash_context;
 u8 VAR_26;
 struct esas2r_component_header *VAR_27;

 if (FUNC_9(VAR_1, &VAR_21->flags)) {

  VAR_22->status = VAR_9;
  return 0;
 }

 FUNC_8(&VAR_25->sgc, VAR_24, sizeof(struct esas2r_sg_context));
 VAR_24 = &VAR_25->sgc;
 VAR_25->fi = VAR_22;
 VAR_25->sgc_offset = VAR_24->cur_offset;
 VAR_23->req_stat = VAR_18;
 VAR_23->interrupt_cx = VAR_25;

 switch (VAR_22->fi_version) {
 case 128:
  VAR_25->scratch = ((struct esas2r_flash_img *)VAR_22)->scratch_buf;
  VAR_25->num_comps = VAR_8;
  VAR_25->fi_hdr_len = sizeof(struct esas2r_flash_img);
  break;

 default:
  return FUNC_1(VAR_21, VAR_23, VAR_12);
 }

 if (FUNC_10(VAR_0, &VAR_21->flags))
  return FUNC_1(VAR_21, VAR_23, VAR_10);

 switch (VAR_22->action) {
 case 131:

  if (!FUNC_11(VAR_21, VAR_25))
   return FUNC_1(VAR_21, VAR_23, VAR_22->status);


  VAR_27 = &VAR_22->cmp_hdr[VAR_2];

  if (VAR_27->length)
   FUNC_4(VAR_21, VAR_22);


  VAR_27 = &VAR_22->cmp_hdr[VAR_4];

  if (VAR_27->length)
   FUNC_5(VAR_21, VAR_22);






  VAR_22->checksum = FUNC_0(VAR_25);


  FUNC_2(VAR_21);


  VAR_25->task = VAR_17;
  VAR_25->func = VAR_19;
  VAR_25->comp_typ = VAR_3;
  VAR_25->flsh_addr = VAR_16;
  VAR_25->sgc.length = VAR_15;
  VAR_25->sgc.cur_offset = ((void*)0);


  VAR_25->interrupt_cb = VAR_20;
  break;

 case 129:
  VAR_22->adap_typ = FUNC_6(VAR_21);
  VAR_22->flags = 0;
  VAR_22->num_comps = VAR_25->num_comps;
  VAR_22->length = VAR_25->fi_hdr_len;


  FUNC_8(VAR_22->rel_version, VAR_21->image_type,
         sizeof(VAR_22->rel_version));


  for (VAR_26 = 0, VAR_27 = VAR_22->cmp_hdr;
       VAR_26 < VAR_22->num_comps;
       VAR_26++, VAR_27++) {
   VAR_27->img_type = VAR_26;
   VAR_27->status = VAR_6;
   VAR_27->length = 0;
   VAR_27->version = 0xffffffff;
   VAR_27->image_offset = 0;
   VAR_27->pad[0] = 0;
   VAR_27->pad[1] = 0;
  }

  if (VAR_21->flash_ver != 0) {
   VAR_22->cmp_hdr[VAR_2].version =
    VAR_22->cmp_hdr[VAR_5].version =
     VAR_22->cmp_hdr[VAR_4].version =
      VAR_22->cmp_hdr[VAR_3].version
       = VAR_21->flash_ver;

   VAR_22->cmp_hdr[VAR_2].status =
    VAR_22->cmp_hdr[VAR_5].status =
     VAR_22->cmp_hdr[VAR_4].status =
      VAR_22->cmp_hdr[VAR_3].status =
       VAR_7;

   return FUNC_1(VAR_21, VAR_23, VAR_14);
  }



 case 130:
 default:
  return FUNC_1(VAR_21, VAR_23, VAR_13);
 }







 if (!FUNC_7(VAR_21, VAR_23))
  return FUNC_1(VAR_21, VAR_23, VAR_11);

 FUNC_3(VAR_21, VAR_23);

 return 1;
}
