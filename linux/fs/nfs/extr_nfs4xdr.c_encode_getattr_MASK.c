
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct compound_hdr {int dummy; } ;
typedef int __u32 ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct xdr_stream*,int ,int ,struct compound_hdr*) ;
 size_t FUNC_3 (int const*,int const*,int *,size_t) ;
 int VAR_2 ;
 int FUNC_4 (struct xdr_stream*,int const*,size_t) ;

__attribute__((used)) static void FUNC_5(struct xdr_stream *VAR_3,
  const __u32 *VAR_4, const __u32 *VAR_5, size_t VAR_6,
  struct compound_hdr *VAR_7)
{
 __u32 VAR_8[VAR_2];

 FUNC_2(VAR_3, VAR_0, VAR_1, VAR_7);
 if (VAR_5) {
  if (FUNC_1(VAR_6 > FUNC_0(VAR_8)))
   VAR_6 = FUNC_0(VAR_8);
  VAR_6 = FUNC_3(VAR_4, VAR_5, VAR_8, VAR_6);
  VAR_4 = VAR_8;
 }
 FUNC_4(VAR_3, VAR_4, VAR_6);
}
