
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct user_namespace {int dummy; } ;
struct timespec {int dummy; } ;
struct iattr {int ia_valid; int ia_mtime; int ia_atime; scalar_t__ ia_size; int ia_gid; int ia_uid; int ia_mode; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct user_namespace*,int ) ;
 int FUNC_2 (struct user_namespace*,int ) ;
 struct timespec FUNC_3 (int ) ;
 int * FUNC_4 (int *,struct timespec*) ;
 int * FUNC_5 (int *,struct timespec*) ;
 int * FUNC_6 (struct xdr_stream*,int) ;
 int * FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct xdr_stream *VAR_10, const struct iattr *VAR_11,
  struct user_namespace *VAR_12)
{
 struct timespec VAR_13;
 __be32 *VAR_14;

 VAR_14 = FUNC_6(VAR_10, VAR_9 << 2);

 if (VAR_11->ia_valid & VAR_3)
  *VAR_14++ = FUNC_0(VAR_11->ia_mode);
 else
  *VAR_14++ = FUNC_0(VAR_8);
 if (VAR_11->ia_valid & VAR_7)
  *VAR_14++ = FUNC_0(FUNC_2(VAR_12, VAR_11->ia_uid));
 else
  *VAR_14++ = FUNC_0(VAR_8);
 if (VAR_11->ia_valid & VAR_2)
  *VAR_14++ = FUNC_0(FUNC_1(VAR_12, VAR_11->ia_gid));
 else
  *VAR_14++ = FUNC_0(VAR_8);
 if (VAR_11->ia_valid & VAR_6)
  *VAR_14++ = FUNC_0((u32)VAR_11->ia_size);
 else
  *VAR_14++ = FUNC_0(VAR_8);

 if (VAR_11->ia_valid & VAR_1) {
  VAR_13 = FUNC_3(VAR_11->ia_atime);
  VAR_14 = FUNC_5(VAR_14, &VAR_13);
 } else if (VAR_11->ia_valid & VAR_0) {
  VAR_13 = FUNC_3(VAR_11->ia_atime);
  VAR_14 = FUNC_4(VAR_14, &VAR_13);
 } else
  VAR_14 = FUNC_7(VAR_14);
 if (VAR_11->ia_valid & VAR_5) {
  VAR_13 = FUNC_3(VAR_11->ia_atime);
  FUNC_5(VAR_14, &VAR_13);
 } else if (VAR_11->ia_valid & VAR_4) {
  VAR_13 = FUNC_3(VAR_11->ia_mtime);
  FUNC_4(VAR_14, &VAR_13);
 } else
  FUNC_7(VAR_14);
}
