
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct qstr {int name; int len; } ;
struct compound_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xdr_stream*,int ,int ,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct xdr_stream *VAR_2, const struct qstr *VAR_3, const struct qstr *VAR_4, struct compound_hdr *VAR_5)
{
 FUNC_0(VAR_2, VAR_0, VAR_1, VAR_5);
 FUNC_1(VAR_2, VAR_3->len, VAR_3->name);
 FUNC_1(VAR_2, VAR_4->len, VAR_4->name);
}
