
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ptid; } ;
struct TYPE_5__ {unsigned long address; TYPE_1__ feat; int flags; } ;
struct TYPE_6__ {TYPE_2__ pagefault; } ;
struct uffd_msg {TYPE_3__ arg; int event; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct uffd_msg*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline struct uffd_msg FUNC_2(unsigned long VAR_7,
         unsigned int VAR_8,
         unsigned long VAR_9,
         unsigned int VAR_10)
{
 struct uffd_msg VAR_11;
 FUNC_0(&VAR_11);
 VAR_11.event = VAR_1;
 VAR_11.arg.pagefault.address = VAR_7;
 if (VAR_8 & VAR_0)







  VAR_11.arg.pagefault.flags |= VAR_4;
 if (VAR_9 & VAR_5)







  VAR_11.arg.pagefault.flags |= VAR_3;
 if (VAR_10 & VAR_2)
  VAR_11.arg.pagefault.feat.ptid = FUNC_1(VAR_6);
 return VAR_11;
}
