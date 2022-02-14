
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_path {int buf_len; scalar_t__* start; scalar_t__* end; scalar_t__* buf; scalar_t__ reversed; } ;



__attribute__((used)) static void FUNC_0(struct fs_path *VAR_0)
{
 if (VAR_0->reversed) {
  VAR_0->start = VAR_0->buf + VAR_0->buf_len - 1;
  VAR_0->end = VAR_0->start;
  *VAR_0->start = 0;
 } else {
  VAR_0->start = VAR_0->buf;
  VAR_0->end = VAR_0->start;
  *VAR_0->start = 0;
 }
}
