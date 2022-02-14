
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct path {scalar_t__ dentry; TYPE_1__* mnt; } ;
struct TYPE_4__ {unsigned int len; int name; } ;
struct dentry {int d_lock; TYPE_2__ d_name; } ;
typedef scalar_t__ __be32 ;
struct TYPE_3__ {scalar_t__ mnt_root; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 struct dentry* FUNC_1 (struct dentry*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct path*) ;
 int FUNC_5 (struct dentry**) ;
 struct dentry** FUNC_6 (struct dentry**,int,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (struct path*,struct path const*) ;
 int FUNC_8 (struct path*) ;
 int FUNC_9 (struct path*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__* FUNC_12 (scalar_t__*,int ,unsigned int) ;
 scalar_t__* FUNC_13 (struct xdr_stream*,unsigned int) ;

__attribute__((used)) static __be32 FUNC_14(struct xdr_stream *VAR_3,
    const struct path *VAR_4,
    const struct path *VAR_5)
{
 struct path VAR_6 = *VAR_5;
 __be32 *VAR_7;
 struct dentry **VAR_8 = ((void*)0);
 unsigned int VAR_9 = 0;
 __be32 VAR_10 = VAR_1;

 FUNC_2("nfsd4_encode_components(");

 FUNC_8(&VAR_6);



 for (;;) {
  if (FUNC_7(&VAR_6, VAR_4))
   break;
  if (VAR_6.dentry == VAR_6.mnt->mnt_root) {
   if (FUNC_4(&VAR_6))
    continue;
   goto out_free;
  }
  if ((VAR_9 & 15) == 0) {
   struct dentry **VAR_11;
   VAR_11 = FUNC_6(VAR_8,
     sizeof(*VAR_11) * (VAR_9 + 16),
     VAR_0);
   if (!VAR_11)
    goto out_free;
   VAR_8 = VAR_11;
  }
  VAR_8[VAR_9++] = VAR_6.dentry;
  VAR_6.dentry = FUNC_1(VAR_6.dentry);
 }
 VAR_10 = VAR_2;
 VAR_7 = FUNC_13(VAR_3, 4);
 if (!VAR_7)
  goto out_free;
 *VAR_7++ = FUNC_0(VAR_9);

 while (VAR_9) {
  struct dentry *VAR_12 = VAR_8[VAR_9 - 1];
  unsigned int VAR_13;

  FUNC_10(&VAR_12->d_lock);
  VAR_13 = VAR_12->d_name.len;
  VAR_7 = FUNC_13(VAR_3, VAR_13 + 4);
  if (!VAR_7) {
   FUNC_11(&VAR_12->d_lock);
   goto out_free;
  }
  VAR_7 = FUNC_12(VAR_7, VAR_12->d_name.name, VAR_13);
  FUNC_2("/%pd", VAR_12);
  FUNC_11(&VAR_12->d_lock);
  FUNC_3(VAR_12);
  VAR_9--;
 }

 VAR_10 = 0;
out_free:
 FUNC_2(")\n");
 while (VAR_9)
  FUNC_3(VAR_8[--VAR_9]);
 FUNC_5(VAR_8);
 FUNC_9(&VAR_6);
 return VAR_10;
}
