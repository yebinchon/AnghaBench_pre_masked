
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vid_hdr {int vol_type; int data_pad; int used_ebs; int vol_id; } ;
struct ubi_device {int dummy; } ;
struct ubi_ainf_volume {scalar_t__ leb_count; int vol_id; scalar_t__ vol_type; int used_ebs; int data_pad; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ubi_ainf_volume const*) ;
 int FUNC_2 (struct ubi_vid_hdr const*) ;
 int FUNC_3 (struct ubi_device const*,char*,...) ;

__attribute__((used)) static int FUNC_4(const struct ubi_device *VAR_4,
       const struct ubi_vid_hdr *VAR_5,
       const struct ubi_ainf_volume *VAR_6, int VAR_7)
{
 int VAR_8 = VAR_5->vol_type;
 int VAR_9 = FUNC_0(VAR_5->vol_id);
 int VAR_10 = FUNC_0(VAR_5->used_ebs);
 int VAR_11 = FUNC_0(VAR_5->data_pad);

 if (VAR_6->leb_count != 0) {
  int VAR_12;







  if (VAR_9 != VAR_6->vol_id) {
   FUNC_3(VAR_4, "inconsistent vol_id");
   goto bad;
  }

  if (VAR_6->vol_type == VAR_1)
   VAR_12 = VAR_3;
  else
   VAR_12 = VAR_2;

  if (VAR_8 != VAR_12) {
   FUNC_3(VAR_4, "inconsistent vol_type");
   goto bad;
  }

  if (VAR_10 != VAR_6->used_ebs) {
   FUNC_3(VAR_4, "inconsistent used_ebs");
   goto bad;
  }

  if (VAR_11 != VAR_6->data_pad) {
   FUNC_3(VAR_4, "inconsistent data_pad");
   goto bad;
  }
 }

 return 0;

bad:
 FUNC_3(VAR_4, "inconsistent VID header at PEB %d", VAR_7);
 FUNC_2(VAR_5);
 FUNC_1(VAR_6);
 return -VAR_0;
}
