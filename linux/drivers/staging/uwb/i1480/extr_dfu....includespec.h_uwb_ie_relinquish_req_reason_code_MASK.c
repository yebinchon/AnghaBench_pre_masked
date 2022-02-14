
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_relinquish_request_ie {int relinquish_req_control; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct uwb_relinquish_request_ie *VAR_0)
{
 return (FUNC_0(VAR_0->relinquish_req_control) >> 0) & 0xf;
}
