
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct squashfs_stream {int dummy; } ;
struct squashfs_sb_info {TYPE_1__* decompressor; struct squashfs_stream* stream; } ;
struct squashfs_page_actor {int dummy; } ;
struct decomp_stream {int stream; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int (* decompress ) (struct squashfs_sb_info*,int ,struct buffer_head**,int,int,int,struct squashfs_page_actor*) ;int name; } ;


 int FUNC_0 (char*,int ) ;
 struct decomp_stream* FUNC_1 (struct squashfs_sb_info*,struct squashfs_stream*) ;
 int FUNC_2 (struct decomp_stream*,struct squashfs_stream*) ;
 int FUNC_3 (struct squashfs_sb_info*,int ,struct buffer_head**,int,int,int,struct squashfs_page_actor*) ;

int FUNC_4(struct squashfs_sb_info *VAR_0, struct buffer_head **VAR_1,
 int VAR_2, int VAR_3, int VAR_4, struct squashfs_page_actor *VAR_5)
{
 int VAR_6;
 struct squashfs_stream *VAR_7 = VAR_0->stream;
 struct decomp_stream *VAR_8 = FUNC_1(VAR_0, VAR_7);
 VAR_6 = VAR_0->decompressor->decompress(VAR_0, VAR_8->stream,
  VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_2(VAR_8, VAR_7);
 if (VAR_6 < 0)
  FUNC_0("%s decompression failed, data probably corrupt\n",
   VAR_0->decompressor->name);
 return VAR_6;
}
