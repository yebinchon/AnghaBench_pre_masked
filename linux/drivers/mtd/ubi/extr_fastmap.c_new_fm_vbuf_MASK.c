
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vid_io_buf {int dummy; } ;
struct ubi_vid_hdr {int compat; int vol_id; int vol_type; } ;
struct ubi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct ubi_vid_io_buf* FUNC_1 (struct ubi_device*,int ) ;
 struct ubi_vid_hdr* FUNC_2 (struct ubi_vid_io_buf*) ;

__attribute__((used)) static struct ubi_vid_io_buf *FUNC_3(struct ubi_device *VAR_3, int VAR_4)
{
 struct ubi_vid_io_buf *VAR_5;
 struct ubi_vid_hdr *VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_5)
  goto out;

 VAR_6 = FUNC_2(VAR_5);
 VAR_6->vol_type = VAR_2;
 VAR_6->vol_id = FUNC_0(VAR_4);




 VAR_6->compat = VAR_1;

out:
 return VAR_5;
}
