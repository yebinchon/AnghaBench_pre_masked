
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct squashfs_stream {int stream; } ;
struct squashfs_sb_info {TYPE_1__* decompressor; struct squashfs_stream* stream; } ;
struct TYPE_2__ {int (* free ) (int ) ;} ;


 int FUNC_0 (struct squashfs_stream*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct squashfs_sb_info *VAR_0)
{
 struct squashfs_stream *VAR_1 = VAR_0->stream;

 if (VAR_1) {
  VAR_0->decompressor->free(VAR_1->stream);
  FUNC_0(VAR_1);
 }
}
