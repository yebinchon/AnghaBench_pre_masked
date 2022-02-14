
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct svc_rqst {int dummy; } ;
struct nfsd4_fs_locations {int locations_count; int * locations; } ;
struct svc_export {int ex_path; struct nfsd4_fs_locations ex_fslocs; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct xdr_stream*,int *) ;
 scalar_t__ FUNC_2 (struct xdr_stream*,struct svc_rqst*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32 FUNC_4(struct xdr_stream *VAR_1,
   struct svc_rqst *VAR_2, struct svc_export *VAR_3)
{
 __be32 VAR_4;
 int VAR_5;
 __be32 *VAR_6;
 struct nfsd4_fs_locations *VAR_7 = &VAR_3->ex_fslocs;

 VAR_4 = FUNC_2(VAR_1, VAR_2, &VAR_3->ex_path);
 if (VAR_4)
  return VAR_4;
 VAR_6 = FUNC_3(VAR_1, 4);
 if (!VAR_6)
  return VAR_0;
 *VAR_6++ = FUNC_0(VAR_7->locations_count);
 for (VAR_5=0; VAR_5<VAR_7->locations_count; VAR_5++) {
  VAR_4 = FUNC_1(VAR_1, &VAR_7->locations[VAR_5]);
  if (VAR_4)
   return VAR_4;
 }
 return 0;
}
