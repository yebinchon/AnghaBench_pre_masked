
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct dpni_ext_set_rx_tc_dist {int num_extracts; struct dpni_dist_extract* extracts; } ;
struct dpni_dist_extract {TYPE_5__* masks; int extract_type; int num_of_byte_masks; int offset; int size; int hdr_index; int field; int efh_type; int prot; } ;
struct dpkg_profile_cfg {int num_extracts; TYPE_7__* extracts; } ;
struct TYPE_10__ {int offset; int size; } ;
struct TYPE_9__ {int offset; int size; } ;
struct TYPE_8__ {int type; int hdr_index; int field; int offset; int size; int prot; } ;
struct TYPE_11__ {TYPE_3__ from_parse; TYPE_2__ from_data; TYPE_1__ from_hdr; } ;
struct TYPE_14__ {int type; TYPE_6__* masks; int num_of_byte_masks; TYPE_4__ extract; } ;
struct TYPE_13__ {int offset; int mask; } ;
struct TYPE_12__ {int offset; int mask; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2(const struct dpkg_profile_cfg *VAR_5, u8 *VAR_6)
{
 int VAR_7, VAR_8;
 struct dpni_ext_set_rx_tc_dist *VAR_9;
 struct dpni_dist_extract *VAR_10;

 if (VAR_5->num_extracts > VAR_0)
  return -VAR_3;

 VAR_9 = (struct dpni_ext_set_rx_tc_dist *)VAR_6;
 VAR_9->num_extracts = VAR_5->num_extracts;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_extracts; VAR_7++) {
  VAR_10 = &VAR_9->extracts[VAR_7];

  switch (VAR_5->extracts[VAR_7].type) {
  case 129:
   VAR_10->prot = VAR_5->extracts[VAR_7].extract.from_hdr.prot;
   FUNC_1(VAR_10->efh_type, VAR_2,
           VAR_5->extracts[VAR_7].extract.from_hdr.type);
   VAR_10->size = VAR_5->extracts[VAR_7].extract.from_hdr.size;
   VAR_10->offset = VAR_5->extracts[VAR_7].extract.from_hdr.offset;
   VAR_10->field = FUNC_0(
    VAR_5->extracts[VAR_7].extract.from_hdr.field);
   VAR_10->hdr_index =
    VAR_5->extracts[VAR_7].extract.from_hdr.hdr_index;
   break;
  case 130:
   VAR_10->size = VAR_5->extracts[VAR_7].extract.from_data.size;
   VAR_10->offset =
    VAR_5->extracts[VAR_7].extract.from_data.offset;
   break;
  case 128:
   VAR_10->size = VAR_5->extracts[VAR_7].extract.from_parse.size;
   VAR_10->offset =
    VAR_5->extracts[VAR_7].extract.from_parse.offset;
   break;
  default:
   return -VAR_3;
  }

  VAR_10->num_of_byte_masks = VAR_5->extracts[VAR_7].num_of_byte_masks;
  FUNC_1(VAR_10->extract_type, VAR_4,
          VAR_5->extracts[VAR_7].type);

  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   VAR_10->masks[VAR_8].mask = VAR_5->extracts[VAR_7].masks[VAR_8].mask;
   VAR_10->masks[VAR_8].offset =
    VAR_5->extracts[VAR_7].masks[VAR_8].offset;
  }
 }

 return 0;
}
