
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs_fattr {int valid; int pre_ctime; int pre_change_attr; int pre_mtime; int pre_size; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_5(struct xdr_stream *VAR_6, struct nfs_fattr *VAR_7)
{
 __be32 *VAR_8;

 VAR_8 = FUNC_4(VAR_6, VAR_1 << 2);
 if (FUNC_1(!VAR_8))
  return -VAR_0;

 VAR_7->valid |= VAR_5
  | VAR_2
  | VAR_4
  | VAR_3;

 VAR_8 = FUNC_3(VAR_8, &VAR_7->pre_size);
 VAR_8 = FUNC_2(VAR_8, &VAR_7->pre_mtime);
 FUNC_2(VAR_8, &VAR_7->pre_ctime);
 VAR_7->pre_change_attr = FUNC_0(&VAR_7->pre_ctime);

 return 0;
}
