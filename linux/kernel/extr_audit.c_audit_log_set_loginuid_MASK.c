
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct tty_struct {int dummy; } ;
struct audit_buffer {int dummy; } ;
typedef int kuid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 struct tty_struct* FUNC_1 () ;
 int FUNC_2 (struct audit_buffer*) ;
 int FUNC_3 (struct audit_buffer*,char*,int ,int ,...) ;
 struct audit_buffer* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct audit_buffer*) ;
 int FUNC_6 (struct tty_struct*) ;
 int VAR_3 ;
 int FUNC_7 (int *,int ) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 char* FUNC_10 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_11(kuid_t VAR_5, kuid_t VAR_6,
       unsigned int VAR_7,
       unsigned int VAR_8, int VAR_9)
{
 struct audit_buffer *VAR_10;
 uid_t VAR_11, VAR_12, VAR_13;
 struct tty_struct *VAR_14;

 if (!VAR_2)
  return;

 VAR_10 = FUNC_4(FUNC_0(), VAR_1, VAR_0);
 if (!VAR_10)
  return;

 VAR_11 = FUNC_7(&VAR_4, FUNC_9(VAR_3));
 VAR_12 = FUNC_7(&VAR_4, VAR_5);
 VAR_13 = FUNC_7(&VAR_4, VAR_6),
 VAR_14 = FUNC_1();

 FUNC_3(VAR_10, "pid=%d uid=%u", FUNC_8(VAR_3), VAR_11);
 FUNC_5(VAR_10);
 FUNC_3(VAR_10, " old-auid=%u auid=%u tty=%s old-ses=%u ses=%u res=%d",
    VAR_12, VAR_13, VAR_14 ? FUNC_10(VAR_14) : "(none)",
    VAR_7, VAR_8, !VAR_9);
 FUNC_6(VAR_14);
 FUNC_2(VAR_10);
}
