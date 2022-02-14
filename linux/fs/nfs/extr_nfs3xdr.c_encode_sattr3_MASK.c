
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct user_namespace {int dummy; } ;
struct timespec {int dummy; } ;
struct iattr {int ia_valid; int ia_mode; int ia_mtime; int ia_atime; scalar_t__ ia_size; int ia_gid; int ia_uid; } ;
typedef void* __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct user_namespace*,int ) ;
 int FUNC_2 (struct user_namespace*,int ) ;
 struct timespec FUNC_3 (int ) ;
 void** FUNC_4 (void**,int ) ;
 void** FUNC_5 (void**,struct timespec*) ;
 void* VAR_9 ;
 void** FUNC_6 (struct xdr_stream*,int) ;
 void* VAR_10 ;
 void* VAR_11 ;

__attribute__((used)) static void FUNC_7(struct xdr_stream *VAR_12, const struct iattr *VAR_13,
  struct user_namespace *VAR_14)
{
 struct timespec VAR_15;
 u32 VAR_16;
 __be32 *VAR_17;







 VAR_16 = 6 * 4;
 if (VAR_13->ia_valid & VAR_3)
  VAR_16 += 4;
 if (VAR_13->ia_valid & VAR_7)
  VAR_16 += 4;
 if (VAR_13->ia_valid & VAR_2)
  VAR_16 += 4;
 if (VAR_13->ia_valid & VAR_6)
  VAR_16 += 8;
 if (VAR_13->ia_valid & VAR_1)
  VAR_16 += 8;
 if (VAR_13->ia_valid & VAR_5)
  VAR_16 += 8;
 VAR_17 = FUNC_6(VAR_12, VAR_16);

 if (VAR_13->ia_valid & VAR_3) {
  *VAR_17++ = VAR_9;
  *VAR_17++ = FUNC_0(VAR_13->ia_mode & VAR_8);
 } else
  *VAR_17++ = VAR_11;

 if (VAR_13->ia_valid & VAR_7) {
  *VAR_17++ = VAR_9;
  *VAR_17++ = FUNC_0(FUNC_2(VAR_14, VAR_13->ia_uid));
 } else
  *VAR_17++ = VAR_11;

 if (VAR_13->ia_valid & VAR_2) {
  *VAR_17++ = VAR_9;
  *VAR_17++ = FUNC_0(FUNC_1(VAR_14, VAR_13->ia_gid));
 } else
  *VAR_17++ = VAR_11;

 if (VAR_13->ia_valid & VAR_6) {
  *VAR_17++ = VAR_9;
  VAR_17 = FUNC_4(VAR_17, (u64)VAR_13->ia_size);
 } else
  *VAR_17++ = VAR_11;

 if (VAR_13->ia_valid & VAR_1) {
  struct timespec VAR_18;
  *VAR_17++ = VAR_10;
  VAR_18 = FUNC_3(VAR_13->ia_atime);
  VAR_17 = FUNC_5(VAR_17, &VAR_18);
 } else if (VAR_13->ia_valid & VAR_0) {
  *VAR_17++ = VAR_9;
 } else
  *VAR_17++ = VAR_11;

 if (VAR_13->ia_valid & VAR_5) {
  *VAR_17++ = VAR_10;
  VAR_15 = FUNC_3(VAR_13->ia_mtime);
  FUNC_5(VAR_17, &VAR_15);
 } else if (VAR_13->ia_valid & VAR_4) {
  *VAR_17 = VAR_9;
 } else
  *VAR_17 = VAR_11;
}
