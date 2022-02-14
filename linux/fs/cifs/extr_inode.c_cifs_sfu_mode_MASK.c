
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct cifs_tcon {TYPE_3__* ses; } ;
struct cifs_sb_info {int dummy; } ;
struct cifs_fattr {int cf_mode; } ;
typedef int ssize_t ;
typedef int __u32 ;
typedef int __le32 ;
struct TYPE_6__ {TYPE_2__* server; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* query_all_EAs ) (unsigned int,struct cifs_tcon*,unsigned char const*,char*,char*,int,struct cifs_sb_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tcon_link*) ;
 int FUNC_1 (struct tcon_link*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (struct tcon_link*) ;
 struct tcon_link* FUNC_4 (struct cifs_sb_info*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned int,struct cifs_tcon*,unsigned char const*,char*,char*,int,struct cifs_sb_info*) ;
 struct cifs_tcon* FUNC_7 (struct tcon_link*) ;

__attribute__((used)) static int FUNC_8(struct cifs_fattr *VAR_3, const unsigned char *VAR_4,
    struct cifs_sb_info *VAR_5, unsigned int VAR_6)
{
 return -VAR_0;

}
