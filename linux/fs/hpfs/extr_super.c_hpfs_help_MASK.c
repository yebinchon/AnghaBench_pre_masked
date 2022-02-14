
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static inline void FUNC_1(void)
{
 FUNC_0("\nHPFS filesystem options:\n      help              do not mount and display this text\n      uid=xxx           set uid of files that don't have uid specified in eas\n      gid=xxx           set gid of files that don't have gid specified in eas\n      umask=xxx         set mode of files that don't have mode specified in eas\n      case=lower        lowercase all files\n      case=asis         do not lowercase files (default)\n      check=none        no fs checks - kernel may crash on corrupted filesystem\n      check=normal      do some checks - it should not crash (default)\n      check=strict      do extra time-consuming checks, used for debugging\n      errors=continue   continue on errors\n      errors=remount-ro remount read-only if errors found (default)\n      errors=panic      panic on errors\n      chkdsk=no         do not mark fs for chkdsking even if there were errors\n      chkdsk=errors     mark fs dirty if errors found (default)\n      chkdsk=always     always mark fs dirty - used for debugging\n      eas=no            ignore extended attributes\n      eas=ro            read but do not write extended attributes\n      eas=rw            r/w eas => enables chmod, chown, mknod, ln -s (default)\n      timeshift=nnn	add nnn seconds to file times\n\n");
}
