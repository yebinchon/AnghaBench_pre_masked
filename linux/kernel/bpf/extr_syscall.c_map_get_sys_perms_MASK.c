
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {TYPE_1__* file; } ;
struct bpf_map {int frozen; } ;
typedef int fmode_t ;
struct TYPE_2__ {int f_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static fmode_t FUNC_1(struct bpf_map *VAR_1, struct fd VAR_2)
{
 fmode_t VAR_3 = VAR_2.file->f_mode;




 if (FUNC_0(VAR_1->frozen))
  VAR_3 &= ~VAR_0;
 return VAR_3;
}
