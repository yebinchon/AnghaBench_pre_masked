
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {int len; int data; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct xdr_netobj *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_0(VAR_1->data, VAR_1->len);
 return VAR_2 & VAR_0;
}
