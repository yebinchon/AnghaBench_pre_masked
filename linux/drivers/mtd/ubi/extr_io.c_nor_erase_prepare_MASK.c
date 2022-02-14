
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ubi_vid_io_buf {int dummy; } ;
struct ubi_vid_hdr {int dummy; } ;
struct ubi_ec_hdr {int dummy; } ;
struct ubi_device {int peb_size; int mtd; scalar_t__ vid_hdr_aloffset; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int,size_t*,void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ubi_device*,int,int ,int) ;
 int FUNC_3 (struct ubi_device*,char*,int,int) ;
 struct ubi_vid_hdr* FUNC_4 (struct ubi_vid_io_buf*) ;
 int FUNC_5 (struct ubi_device*,struct ubi_vid_io_buf*,struct ubi_vid_hdr*) ;
 int FUNC_6 (struct ubi_device*,int,struct ubi_ec_hdr*,int ) ;
 int FUNC_7 (struct ubi_device*,int,struct ubi_vid_io_buf*,int ) ;

__attribute__((used)) static int FUNC_8(struct ubi_device *VAR_4, int VAR_5)
{
 int VAR_6;
 size_t VAR_7;
 loff_t VAR_8;
 uint32_t VAR_9 = 0;
 struct ubi_ec_hdr VAR_10;
 struct ubi_vid_io_buf VAR_11;
 struct ubi_vid_hdr VAR_12;
 VAR_8 = (loff_t)VAR_5 * VAR_4->peb_size;
 VAR_6 = FUNC_6(VAR_4, VAR_5, &VAR_10, 0);
 if (VAR_6 != VAR_2 && VAR_6 != VAR_1 &&
     VAR_6 != VAR_3){
  VAR_6 = FUNC_0(VAR_4->mtd, VAR_8, 4, &VAR_7, (void *)&VAR_9);
  if(VAR_6)
   goto error;
 }

 FUNC_5(VAR_4, &VAR_11, &VAR_12);
 FUNC_1(&VAR_12 == FUNC_4(&VAR_11));

 VAR_6 = FUNC_7(VAR_4, VAR_5, &VAR_11, 0);
 if (VAR_6 != VAR_2 && VAR_6 != VAR_1 &&
     VAR_6 != VAR_3){
  VAR_8 += VAR_4->vid_hdr_aloffset;
  VAR_6 = FUNC_0(VAR_4->mtd, VAR_8, 4, &VAR_7, (void *)&VAR_9);
  if (VAR_6)
   goto error;
 }
 return 0;

error:





 FUNC_3(VAR_4, "cannot invalidate PEB %d, write returned %d", VAR_5, VAR_6);
 FUNC_2(VAR_4, VAR_5, 0, VAR_4->peb_size);
 return -VAR_0;
}
