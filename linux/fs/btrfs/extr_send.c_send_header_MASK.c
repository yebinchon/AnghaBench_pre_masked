
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_ctx {int send_off; int send_filp; } ;
struct btrfs_stream_header {int version; int magic; } ;
typedef int hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct btrfs_stream_header*,int,int *) ;

__attribute__((used)) static int FUNC_3(struct send_ctx *VAR_2)
{
 struct btrfs_stream_header VAR_3;

 FUNC_1(VAR_3.magic, VAR_0);
 VAR_3.version = FUNC_0(VAR_1);

 return FUNC_2(VAR_2->send_filp, &VAR_3, sizeof(VAR_3),
     &VAR_2->send_off);
}
