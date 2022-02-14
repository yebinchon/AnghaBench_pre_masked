
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {int dummy; } ;
struct ubi_vid_io_buf {int dummy; } ;
struct ubi_device {struct ubi_volume** volumes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ubi_volume*,int,int,void const*,int,int,struct ubi_vid_io_buf*,int*) ;
 struct ubi_vid_io_buf* FUNC_1 (struct ubi_device*,int ) ;
 int FUNC_2 (struct ubi_vid_io_buf*) ;
 int FUNC_3 (struct ubi_device*,char*) ;
 int FUNC_4 (struct ubi_device*,int) ;

__attribute__((used)) static int FUNC_5(struct ubi_device *VAR_3, int VAR_4, int VAR_5, int VAR_6,
         const void *VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11 = FUNC_4(VAR_3, VAR_5), VAR_12;
 struct ubi_volume *VAR_13 = VAR_3->volumes[VAR_11];
 struct ubi_vid_io_buf *VAR_14;

 VAR_14 = FUNC_1(VAR_3, VAR_1);
 if (!VAR_14)
  return -VAR_0;

 for (VAR_12 = 0; VAR_12 <= VAR_2; VAR_12++) {
  bool VAR_15;

  VAR_10 = FUNC_0(VAR_13, VAR_4, VAR_6, VAR_7, VAR_8, VAR_9, VAR_14,
          &VAR_15);
  if (!VAR_10 || !VAR_15)
   break;

  FUNC_3(VAR_3, "try again");
 }

 FUNC_2(VAR_14);

 return VAR_10;
}
