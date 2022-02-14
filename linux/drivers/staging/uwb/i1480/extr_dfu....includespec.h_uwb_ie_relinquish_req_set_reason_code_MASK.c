
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct uwb_relinquish_request_ie {int relinquish_req_control; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct uwb_relinquish_request_ie *VAR_0,
        int VAR_1)
{
 u16 VAR_2 = FUNC_1(VAR_0->relinquish_req_control);
 VAR_2 = (VAR_2 & ~(0xf << 0)) | (VAR_1 << 0);
 VAR_0->relinquish_req_control = FUNC_0(VAR_2);
}
