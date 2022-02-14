
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int draft; int update; int minor; int major; } ;
struct TYPE_4__ {int seg_name; int seg_size; int seg_type; TYPE_1__ seg_ver; } ;
struct ice_seg {TYPE_2__ hdr; } ;
struct ice_hw {int dummy; } ;
struct ice_buf_table {int buf_count; int buf_array; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int FUNC_0 (struct ice_hw*,int ,char*,int ,...) ;
 int FUNC_1 (struct ice_hw*,int ,int ) ;
 struct ice_buf_table* FUNC_2 (struct ice_seg*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static enum ice_status
FUNC_4(struct ice_hw *VAR_1, struct ice_seg *VAR_2)
{
 struct ice_buf_table *VAR_3;

 FUNC_0(VAR_1, VAR_0, "Segment version: %d.%d.%d.%d\n",
    VAR_2->hdr.seg_ver.major, VAR_2->hdr.seg_ver.minor,
    VAR_2->hdr.seg_ver.update, VAR_2->hdr.seg_ver.draft);

 FUNC_0(VAR_1, VAR_0, "Seg: type 0x%X, size %d, name %s\n",
    FUNC_3(VAR_2->hdr.seg_type),
    FUNC_3(VAR_2->hdr.seg_size), VAR_2->hdr.seg_name);

 VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_1, VAR_0, "Seg buf count: %d\n",
    FUNC_3(VAR_3->buf_count));

 return FUNC_1(VAR_1, VAR_3->buf_array,
      FUNC_3(VAR_3->buf_count));
}
