
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct cftype {int flags; scalar_t__ write; scalar_t__ write_s64; scalar_t__ write_u64; scalar_t__ seq_show; scalar_t__ read_s64; scalar_t__ read_u64; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static umode_t FUNC_0(const struct cftype *VAR_4)
{
 umode_t VAR_5 = 0;

 if (VAR_4->read_u64 || VAR_4->read_s64 || VAR_4->seq_show)
  VAR_5 |= VAR_1;

 if (VAR_4->write_u64 || VAR_4->write_s64 || VAR_4->write) {
  if (VAR_4->flags & VAR_0)
   VAR_5 |= VAR_2;
  else
   VAR_5 |= VAR_3;
 }

 return VAR_5;
}
