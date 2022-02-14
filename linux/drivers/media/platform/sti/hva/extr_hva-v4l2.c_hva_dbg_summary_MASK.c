
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hva_streaminfo {int level; int profile; int height; int width; int streamformat; } ;
struct hva_frameinfo {int aligned_height; int aligned_width; int pixelformat; } ;
struct hva_ctx {int flags; int frame_errors; int encode_errors; int sys_errors; int encoded_frames; int name; struct hva_frameinfo frameinfo; struct hva_streaminfo streaminfo; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct device* FUNC_0 (struct hva_ctx*) ;
 int FUNC_1 (struct device*,char*,int ,char*,int ,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hva_ctx *VAR_1)
{
 struct device *VAR_2 = FUNC_0(VAR_1);
 struct hva_streaminfo *VAR_3 = &VAR_1->streaminfo;
 struct hva_frameinfo *VAR_4 = &VAR_1->frameinfo;

 if (!(VAR_1->flags & VAR_0))
  return;

 FUNC_1(VAR_2, "%s %4.4s %dx%d > %4.4s %dx%d %s %s: %d frames encoded, %d system errors, %d encoding errors, %d frame errors\n",
  VAR_1->name,
  (char *)&VAR_4->pixelformat,
  VAR_4->aligned_width, VAR_4->aligned_height,
  (char *)&VAR_3->streamformat,
  VAR_3->width, VAR_3->height,
  VAR_3->profile, VAR_3->level,
  VAR_1->encoded_frames,
  VAR_1->sys_errors,
  VAR_1->encode_errors,
  VAR_1->frame_errors);
}
