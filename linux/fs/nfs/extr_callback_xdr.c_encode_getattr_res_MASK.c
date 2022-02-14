
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {scalar_t__ p; } ;
struct svc_rqst {int dummy; } ;
struct cb_getattrres {scalar_t__ status; int mtime; int bitmap; int ctime; int size; int change_attr; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct xdr_stream*,int ,int ) ;
 scalar_t__ FUNC_3 (struct xdr_stream*,int ,int ) ;
 scalar_t__ FUNC_4 (struct xdr_stream*,int ,int *) ;
 scalar_t__ FUNC_5 (struct xdr_stream*,int ,int *) ;
 scalar_t__ FUNC_6 (struct xdr_stream*,int ,int ) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__* FUNC_9 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32 FUNC_10(struct svc_rqst *VAR_1, struct xdr_stream *VAR_2,
  const void *VAR_3)
{
 const struct cb_getattrres *VAR_4 = VAR_3;
 __be32 *VAR_5 = ((void*)0);
 __be32 VAR_6 = VAR_4->status;

 if (FUNC_8(VAR_6 != 0))
  goto out;
 VAR_6 = FUNC_2(VAR_2, VAR_4->bitmap, FUNC_0(VAR_4->bitmap));
 if (FUNC_8(VAR_6 != 0))
  goto out;
 VAR_6 = FUNC_1(VAR_0);
 VAR_5 = FUNC_9(VAR_2, sizeof(*VAR_5));
 if (FUNC_8(!VAR_5))
  goto out;
 VAR_6 = FUNC_3(VAR_2, VAR_4->bitmap, VAR_4->change_attr);
 if (FUNC_8(VAR_6 != 0))
  goto out;
 VAR_6 = FUNC_6(VAR_2, VAR_4->bitmap, VAR_4->size);
 if (FUNC_8(VAR_6 != 0))
  goto out;
 VAR_6 = FUNC_4(VAR_2, VAR_4->bitmap, &VAR_4->ctime);
 if (FUNC_8(VAR_6 != 0))
  goto out;
 VAR_6 = FUNC_5(VAR_2, VAR_4->bitmap, &VAR_4->mtime);
 *VAR_5 = FUNC_7((unsigned int)((char *)VAR_2->p - (char *)(VAR_5+1)));
out:
 return VAR_6;
}
