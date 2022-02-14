
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int hw_owned; } ;
struct TYPE_13__ {scalar_t__ data; TYPE_5__ tx; } ;
struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_14__ {scalar_t__ buf_size; TYPE_6__ ctrl; TYPE_2__ buf; } ;
struct ksz_desc {TYPE_7__ sw; TYPE_4__* phw; } ;
struct TYPE_10__ {void* data; } ;
struct TYPE_8__ {void* data; } ;
struct TYPE_11__ {TYPE_3__ ctrl; TYPE_1__ buf; } ;


 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct ksz_desc *VAR_0)
{
 VAR_0->sw.ctrl.tx.hw_owned = 1;
 if (VAR_0->sw.buf_size != VAR_0->sw.buf.data) {
  VAR_0->sw.buf_size = VAR_0->sw.buf.data;
  VAR_0->phw->buf.data = FUNC_0(VAR_0->sw.buf.data);
 }
 VAR_0->phw->ctrl.data = FUNC_0(VAR_0->sw.ctrl.data);
}
