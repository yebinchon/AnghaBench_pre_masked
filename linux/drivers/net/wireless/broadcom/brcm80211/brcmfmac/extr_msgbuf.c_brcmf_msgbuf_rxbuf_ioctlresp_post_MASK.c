
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct brcmf_msgbuf {scalar_t__ cur_ioctlrespbuf; scalar_t__ max_ioctlrespbuf; } ;


 scalar_t__ FUNC_0 (struct brcmf_msgbuf*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct brcmf_msgbuf *VAR_0)
{
 u32 VAR_1;

 VAR_1 = VAR_0->max_ioctlrespbuf - VAR_0->cur_ioctlrespbuf;
 VAR_1 = FUNC_0(VAR_0, 0, VAR_1);
 VAR_0->cur_ioctlrespbuf += VAR_1;
}
