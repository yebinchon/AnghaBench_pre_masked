
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct gb_loopback_transfer_response {int dummy; } ;
struct gb_loopback_transfer_request {int len; int data; } ;
struct gb_loopback {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct gb_loopback*,int ,struct gb_loopback_transfer_request*,scalar_t__,scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct gb_loopback_transfer_request*) ;
 struct gb_loopback_transfer_request* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct gb_loopback *VAR_4, u32 VAR_5)
{
 struct gb_loopback_transfer_request *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_3(VAR_5 + sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 FUNC_4(VAR_6->data, 0x5A, VAR_5);

 VAR_6->len = FUNC_0(VAR_5);
 VAR_8 = sizeof(struct gb_loopback_transfer_response);
 VAR_7 = FUNC_1(VAR_4, VAR_1,
          VAR_6, VAR_5 + sizeof(*VAR_6),
          VAR_5 + VAR_8,
          VAR_3);
 if (VAR_7)
  goto gb_error;

gb_error:
 FUNC_2(VAR_6);
 return VAR_7;
}
