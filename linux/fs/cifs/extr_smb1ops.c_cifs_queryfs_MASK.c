
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kstatfs {int f_type; } ;
struct TYPE_4__ {int Capability; } ;
struct cifs_tcon {TYPE_1__* ses; TYPE_2__ fsUnixInfo; } ;
struct TYPE_3__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int const,struct cifs_tcon*,struct kstatfs*) ;
 int FUNC_1 (unsigned int const,struct cifs_tcon*,struct kstatfs*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (unsigned int const,struct cifs_tcon*,struct kstatfs*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(const unsigned int VAR_5, struct cifs_tcon *VAR_6,
      struct kstatfs *VAR_7)
{
 int VAR_8 = -VAR_4;

 VAR_7->f_type = VAR_2;




 if ((VAR_6->ses->capabilities & VAR_1) &&
     (VAR_3 & FUNC_3(VAR_6->fsUnixInfo.Capability)))
  VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7);





 if (VAR_8 && (VAR_6->ses->capabilities & VAR_0))
  VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_7);






 if (VAR_8)
  VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_7);
 return VAR_8;
}
