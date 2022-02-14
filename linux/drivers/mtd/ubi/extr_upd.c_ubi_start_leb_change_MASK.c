
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {int changing_leb; scalar_t__ upd_bytes; int upd_buf; int ch_lnum; scalar_t__ upd_received; int vol_id; int updating; } ;
struct ubi_leb_change_req {scalar_t__ bytes; int lnum; } ;
struct ubi_device {int min_io_size; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ubi_device*,struct ubi_volume*,int ,int *,int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct ubi_device *VAR_1, struct ubi_volume *VAR_2,
    const struct ubi_leb_change_req *VAR_3)
{
 FUNC_2(!VAR_2->updating && !VAR_2->changing_leb);

 FUNC_1("start changing LEB %d:%d, %u bytes",
  VAR_2->vol_id, VAR_3->lnum, VAR_3->bytes);
 if (VAR_3->bytes == 0)
  return FUNC_3(VAR_1, VAR_2, VAR_3->lnum, ((void*)0), 0);

 VAR_2->upd_bytes = VAR_3->bytes;
 VAR_2->upd_received = 0;
 VAR_2->changing_leb = 1;
 VAR_2->ch_lnum = VAR_3->lnum;

 VAR_2->upd_buf = FUNC_4(FUNC_0((int)VAR_3->bytes, VAR_1->min_io_size));
 if (!VAR_2->upd_buf)
  return -VAR_0;

 return 0;
}
