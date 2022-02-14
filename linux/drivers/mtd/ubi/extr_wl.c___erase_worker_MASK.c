
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_work {int vol_id; int lnum; int torture; struct ubi_wl_entry* e; } ;
struct ubi_wl_entry {int pnum; int ec; } ;
struct ubi_device {int beb_rsvd_pebs; scalar_t__ avail_pebs; int bad_peb_count; int good_peb_count; int volumes_lock; int bad_allowed; int wl_lock; int free_count; int free; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int ,int,int) ;
 int FUNC_1 (struct ubi_device*,int) ;
 int FUNC_2 (struct ubi_device*,struct ubi_wl_entry*,int,int,int ,int) ;
 int FUNC_3 (struct ubi_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ubi_device*,struct ubi_wl_entry*,int ) ;
 int FUNC_7 (struct ubi_device*) ;
 int FUNC_8 (struct ubi_device*,char*,...) ;
 int FUNC_9 (struct ubi_device*,int) ;
 int FUNC_10 (struct ubi_device*,char*,int) ;
 int FUNC_11 (struct ubi_device*) ;
 int FUNC_12 (struct ubi_device*,char*) ;
 int FUNC_13 (struct ubi_device*,struct ubi_wl_entry*) ;
 int FUNC_14 (struct ubi_wl_entry*,int *) ;

__attribute__((used)) static int FUNC_15(struct ubi_device *VAR_5, struct ubi_work *VAR_6)
{
 struct ubi_wl_entry *VAR_7 = VAR_6->e;
 int VAR_8 = VAR_7->pnum;
 int VAR_9 = VAR_6->vol_id;
 int VAR_10 = VAR_6->lnum;
 int VAR_11, VAR_12 = 0;

 FUNC_0("erase PEB %d EC %d LEB %d:%d",
        VAR_8, VAR_7->ec, VAR_6->vol_id, VAR_6->lnum);

 VAR_11 = FUNC_6(VAR_5, VAR_7, VAR_6->torture);
 if (!VAR_11) {
  FUNC_4(&VAR_5->wl_lock);
  FUNC_14(VAR_7, &VAR_5->free);
  VAR_5->free_count++;
  FUNC_5(&VAR_5->wl_lock);





  FUNC_3(VAR_5);


  VAR_11 = FUNC_1(VAR_5, 1);
  return VAR_11;
 }

 FUNC_8(VAR_5, "failed to erase PEB %d, error %d", VAR_8, VAR_11);

 if (VAR_11 == -VAR_2 || VAR_11 == -VAR_4 || VAR_11 == -VAR_0 ||
     VAR_11 == -VAR_1) {
  int VAR_13;


  VAR_13 = FUNC_2(VAR_5, VAR_7, VAR_9, VAR_10, 0, 0);
  if (VAR_13) {
   FUNC_13(VAR_5, VAR_7);
   VAR_11 = VAR_13;
   goto out_ro;
  }
  return VAR_11;
 }

 FUNC_13(VAR_5, VAR_7);
 if (VAR_11 != -VAR_3)





  goto out_ro;



 if (!VAR_5->bad_allowed) {
  FUNC_8(VAR_5, "bad physical eraseblock %d detected", VAR_8);
  goto out_ro;
 }

 FUNC_4(&VAR_5->volumes_lock);
 if (VAR_5->beb_rsvd_pebs == 0) {
  if (VAR_5->avail_pebs == 0) {
   FUNC_5(&VAR_5->volumes_lock);
   FUNC_8(VAR_5, "no reserved/available physical eraseblocks");
   goto out_ro;
  }
  VAR_5->avail_pebs -= 1;
  VAR_12 = 1;
 }
 FUNC_5(&VAR_5->volumes_lock);

 FUNC_10(VAR_5, "mark PEB %d as bad", VAR_8);
 VAR_11 = FUNC_9(VAR_5, VAR_8);
 if (VAR_11)
  goto out_ro;

 FUNC_4(&VAR_5->volumes_lock);
 if (VAR_5->beb_rsvd_pebs > 0) {
  if (VAR_12) {




   VAR_5->avail_pebs += 1;
   VAR_12 = 0;
  }
  VAR_5->beb_rsvd_pebs -= 1;
 }
 VAR_5->bad_peb_count += 1;
 VAR_5->good_peb_count -= 1;
 FUNC_7(VAR_5);
 if (VAR_12)
  FUNC_12(VAR_5, "no PEBs in the reserved pool, used an available PEB");
 else if (VAR_5->beb_rsvd_pebs)
  FUNC_10(VAR_5, "%d PEBs left in the reserve",
   VAR_5->beb_rsvd_pebs);
 else
  FUNC_12(VAR_5, "last PEB from the reserve was used");
 FUNC_5(&VAR_5->volumes_lock);

 return VAR_11;

out_ro:
 if (VAR_12) {
  FUNC_4(&VAR_5->volumes_lock);
  VAR_5->avail_pebs += 1;
  FUNC_5(&VAR_5->volumes_lock);
 }
 FUNC_11(VAR_5);
 return VAR_11;
}
