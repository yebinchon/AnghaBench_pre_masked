
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {int max_assoc_sta; } ;



__attribute__((used)) static inline bool FUNC_0(struct wil6210_priv *VAR_0, int VAR_1)
{
 return (VAR_1 >= 0 && VAR_1 < VAR_0->max_assoc_sta);
}
