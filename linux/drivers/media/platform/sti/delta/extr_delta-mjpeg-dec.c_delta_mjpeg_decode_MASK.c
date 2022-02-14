
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mjpeg_header {int frame_width; int frame_height; } ;
struct delta_mjpeg_ctx {struct mjpeg_header* header; int ipc_hdl; struct mjpeg_header header_struct; } ;
struct delta_dev {int dev; } ;
struct delta_ctx {int stream_errors; int name; struct delta_dev* dev; } ;
struct delta_au {unsigned int vaddr; unsigned int paddr; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct delta_ctx*,struct delta_au*) ;
 int FUNC_1 (struct delta_ctx*) ;
 int FUNC_2 (struct delta_ctx*,unsigned int,int ,struct mjpeg_header*,unsigned int*) ;
 int FUNC_3 (int ,char*,int ,int,int,int) ;
 struct delta_mjpeg_ctx* FUNC_4 (struct delta_ctx*) ;

__attribute__((used)) static int FUNC_5(struct delta_ctx *VAR_2, struct delta_au *VAR_3)
{
 struct delta_dev *VAR_4 = VAR_2->dev;
 struct delta_mjpeg_ctx *VAR_5 = FUNC_4(VAR_2);
 int VAR_6;
 struct delta_au VAR_7 = *VAR_3;
 unsigned int VAR_8 = 0;
 struct mjpeg_header *VAR_9 = &VAR_5->header_struct;

 if (!VAR_5->header) {
  VAR_6 = FUNC_2(VAR_2, VAR_7.vaddr, VAR_7.size,
           VAR_9, &VAR_8);
  if (VAR_6) {
   VAR_2->stream_errors++;
   goto err;
  }
  if (VAR_9->frame_width * VAR_9->frame_height >
      VAR_0) {
   FUNC_3(VAR_4->dev,
    "%s  stream resolution too large: %dx%d > %d pixels budget\n",
    VAR_2->name,
    VAR_9->frame_width,
    VAR_9->frame_height, VAR_0);
   VAR_6 = -VAR_1;
   goto err;
  }
  VAR_5->header = VAR_9;
  goto out;
 }

 if (!VAR_5->ipc_hdl) {
  VAR_6 = FUNC_1(VAR_2);
  if (VAR_6)
   goto err;
 }

 VAR_6 = FUNC_2(VAR_2, VAR_7.vaddr, VAR_7.size,
          VAR_5->header, &VAR_8);
 if (VAR_6) {
  VAR_2->stream_errors++;
  goto err;
 }

 VAR_7.paddr += VAR_8;
 VAR_7.vaddr += VAR_8;

 VAR_6 = FUNC_0(VAR_2, &VAR_7);
 if (VAR_6)
  goto err;

out:
 return 0;

err:
 return VAR_6;
}
