
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct gb_loopback_transfer_request {int len; } ;
struct gb_loopback {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct gb_loopback*,int ,struct gb_loopback_transfer_request*,scalar_t__,int *,int ) ;
 int FUNC_2 (struct gb_loopback_transfer_request*) ;
 struct gb_loopback_transfer_request* FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct gb_loopback *VAR_3, u32 VAR_4)
{
 struct gb_loopback_transfer_request *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_4 + sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->len = FUNC_0(VAR_4);
 VAR_6 = FUNC_1(VAR_3, VAR_1,
         VAR_5, VAR_4 + sizeof(*VAR_5),
         ((void*)0), 0);
 FUNC_2(VAR_5);
 return VAR_6;
}
