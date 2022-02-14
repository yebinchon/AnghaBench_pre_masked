
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ubi_volume {int vol_id; int data_pad; TYPE_2__* eba_tbl; } ;
struct ubi_vid_io_buf {int dummy; } ;
struct ubi_vid_hdr {void* sqnum; void* data_crc; void* used_ebs; void* data_size; int vol_type; void* data_pad; int compat; void* lnum; void* vol_id; } ;
struct ubi_device {int bad_allowed; int min_io_size; scalar_t__ ro_mode; } ;
struct TYPE_4__ {TYPE_1__* entries; } ;
struct TYPE_3__ {scalar_t__ pnum; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,void const*,int) ;
 int FUNC_4 (struct ubi_device*,int,int) ;
 int FUNC_5 (struct ubi_device*,int,int) ;
 int FUNC_6 (struct ubi_volume*,int,struct ubi_vid_io_buf*,void const*,int ,int) ;
 struct ubi_vid_io_buf* FUNC_7 (struct ubi_device*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct ubi_vid_io_buf*) ;
 int FUNC_10 (struct ubi_device*,int) ;
 struct ubi_vid_hdr* FUNC_11 (struct ubi_vid_io_buf*) ;
 int FUNC_12 (struct ubi_device*,char*) ;
 int FUNC_13 (struct ubi_device*) ;
 int FUNC_14 (struct ubi_device*) ;

int FUNC_15(struct ubi_device *VAR_7, struct ubi_volume *VAR_8,
    int VAR_9, const void *VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13, VAR_14, VAR_15 = VAR_11, VAR_16 = VAR_8->vol_id;
 struct ubi_vid_io_buf *VAR_17;
 struct ubi_vid_hdr *VAR_18;
 uint32_t VAR_19;

 if (VAR_7->ro_mode)
  return -VAR_2;

 if (VAR_9 == VAR_12 - 1)

  VAR_11 = FUNC_0(VAR_15, VAR_7->min_io_size);
 else
  FUNC_8(!(VAR_11 & (VAR_7->min_io_size - 1)));

 VAR_17 = FUNC_7(VAR_7, VAR_3);
 if (!VAR_17)
  return -VAR_1;

 VAR_18 = FUNC_11(VAR_17);

 VAR_13 = FUNC_4(VAR_7, VAR_16, VAR_9);
 if (VAR_13)
  goto out;

 VAR_18->sqnum = FUNC_2(FUNC_13(VAR_7));
 VAR_18->vol_id = FUNC_1(VAR_16);
 VAR_18->lnum = FUNC_1(VAR_9);
 VAR_18->compat = FUNC_10(VAR_7, VAR_16);
 VAR_18->data_pad = FUNC_1(VAR_8->data_pad);

 VAR_19 = FUNC_3(VAR_4, VAR_10, VAR_15);
 VAR_18->vol_type = VAR_6;
 VAR_18->data_size = FUNC_1(VAR_15);
 VAR_18->used_ebs = FUNC_1(VAR_12);
 VAR_18->data_crc = FUNC_1(VAR_19);

 FUNC_8(VAR_8->eba_tbl->entries[VAR_9].pnum < 0);

 for (VAR_14 = 0; VAR_14 <= VAR_5; VAR_14++) {
  VAR_13 = FUNC_6(VAR_8, VAR_9, VAR_17, VAR_10, 0, VAR_11);
  if (VAR_13 != -VAR_0 || !VAR_7->bad_allowed)
   break;

  VAR_18->sqnum = FUNC_2(FUNC_13(VAR_7));
  FUNC_12(VAR_7, "try another PEB");
 }

 if (VAR_13)
  FUNC_14(VAR_7);

 FUNC_5(VAR_7, VAR_16, VAR_9);

out:
 FUNC_9(VAR_17);

 return VAR_13;
}
