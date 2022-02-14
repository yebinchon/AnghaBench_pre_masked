
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wil_tid_ampdu_rx {int buf_size; int ssn; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct wil_tid_ampdu_rx *VAR_0, u16 VAR_1)
{
 return FUNC_0(VAR_1, VAR_0->ssn) % VAR_0->buf_size;
}
